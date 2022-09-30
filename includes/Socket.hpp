#ifndef SOCKET_HPP
# define SOCKET_HPP

class Socket;
#include "define.hpp"
#include "Epoll.hpp"

class Socket
{
	public:
		Socket();
		Socket(const Socket &rhs);
		Socket(Epoll &epoll, t_socket sockfd);// TODO mettre infoserver
		~Socket();
		Socket &operator=(const Socket &rhs);

	private:	
		int _fd;
		// TODO mettre infoserver en membre priver
};

#endif