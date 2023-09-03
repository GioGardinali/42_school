#include	"get_next_line.h"


static char	*line_break(int fd, char *buffer, char *residue)
{
	ssize_t		bytes;

	while (1)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(residue), NULL);
		else if (bytes == 0)
			break ;
		buffer[bytes] = '\0';
		if (!residue)
			residue = ft_strdup("");
		residue = ft_strjoin(residue, buffer);
		if (ft_strchr(residue, '\n'))
			break ;
	}
	return (residue);
}

static char	*ft_split_line(char *line)
{
	int		i;
	char	*rest_memory;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[i + 1] == '\0')
		return (NULL);
	rest_memory = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*rest_memory == '\0')
	{
		free(rest_memory);
		rest_memory = NULL;
	}
	line[i + 1] = '\0';
	return (rest_memory);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*residue;

	if (fd < 0 || BUFFER_SIZE <= 0 || read (fd, 0, 0))
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = line_break(fd, buffer, residue);
	free(buffer);
	if (line == NULL)
		return (line);
	residue = ft_split_line(line);
	return (line);
}

/* char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*str;

	ch = (char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (*str == ch)
		return (str);
	return (NULL);
} */