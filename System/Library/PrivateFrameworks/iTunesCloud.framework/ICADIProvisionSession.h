/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICADIProvisionSession : NSObject {

	unsigned long long _accountID;
	unsigned _sessionID;

}
-(void)dealloc;
-(id)initWithAccountID:(unsigned long long)arg1 ;
-(BOOL)startWithServerActionData:(id)arg1 returningClientData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id*)arg3 ;
-(void)_destroySession;
@end

