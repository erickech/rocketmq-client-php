#ifndef ROCKETMQ_CLIENT_PHP_SESSION_CREDENTIALS_H
#define ROCKETMQ_CLIENT_PHP_SESSION_CREDENTIALS_H
#include "common.h"
#include <rocketmq/SessionCredentials.h>

class SessionCredentials : public Php::Base {
	rocketmq::SessionCredentials* sc;
	public:
	void __construct(Php::Parameters &params);
	void __destruct();

	Php::Value getAccessKey();
	void setAccessKey(Php::Parameters &params);

	Php::Value getSecretKey();
	void setSecretKey(Php::Parameters &params);

	Php::Value getSignature();
	void setSignature(Php::Parameters &params);

	Php::Value getSignatureMethod();
	void setSignatureMethod(Php::Parameters &params);

	Php::Value getAuthChannel();
	void setAuthChannel(Php::Parameters &params);

	Php::Value isValid();
};

void registerSessionCredentials(Php::Namespace &rocketMQNamespace);
#endif