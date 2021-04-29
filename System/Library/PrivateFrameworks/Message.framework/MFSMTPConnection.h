/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/Message-Structs.h>
#import <Message/MFConnection.h>

@class MFSMTPResponse, NSMutableArray, NSMutableData, NSString;

@interface MFSMTPConnection : MFConnection {

	MFSMTPResponse* _lastResponse;
	NSMutableArray* _serviceExtensions;
	NSMutableData* _mdata;
	NSString* _domainName;
	NSString* _saveSentMbox;
	int _originalSocketTimeout;
	long long _lastCommandTimestamp;
	id _delegate;
	BOOL _hideLoggedData;
	BOOL _useSaveSent;
	BOOL _dislikesSaveSentMbox;

}
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(int)state;
-(id)domainName;
-(void)setDomainName:(id)arg1 ;
-(void)abort;
-(int)sendData:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(BOOL)supportsOutboxCopy;
-(BOOL)supportsBinaryMime;
-(void)setUseSaveSent:(BOOL)arg1 toFolder:(id)arg2 ;
-(long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorTitle:(id*)arg5 errorMessage:(id*)arg6 serverResponse:(id*)arg7 displayError:(BOOL*)arg8 errorCode:(int*)arg9 ;
-(int)quit;
-(BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2 ;
-(BOOL)_supportsSaveSentExtension;
-(BOOL)_supportsExtension:(id)arg1 ;
-(int)_sendCommand:(const char*)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char*)arg4 ;
-(int)_getReply;
-(id)lastResponseLine;
-(BOOL)_connectUsingAccount:(id)arg1 ;
-(int)_doHandshakeUsingAccount:(id)arg1 ;
-(BOOL)supports8BitMime;
-(int)_sendData:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(id)_dataForCommand:(const char*)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char*)arg4 ;
-(BOOL)supportsChunking;
-(BOOL)supportsPipelining;
-(id)dataForMailFrom:(id)arg1 ;
-(id)dataForRcptTo:(id)arg1 ;
-(id)dataForDataCmd;
-(int)_sendData:(id)arg1 ;
-(int)sendBData:(id)arg1 ;
-(int)mailFrom:(id)arg1 ;
-(int)rcptTo:(id)arg1 ;
-(void)_setLastResponse:(id)arg1 ;
-(int)_sendBytes:(const char*)arg1 length:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 ;
-(int)_readResponseRange:(NSRange*)arg1 isContinuation:(BOOL*)arg2 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(id)lastResponse;
-(BOOL)supportsEnhancedStatusCodes;
-(id)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(int)noop;
-(long long)timeLastCommandWasSent;
@end

