/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENTextMessageManagerDelegate;
@class NSObject, ENSecureArchiveFileWrapper, NSMutableDictionary;

@interface ENTextMessageManager : NSObject {

	NSObject*<ENTextMessageManagerDelegate> _delegate;
	ENSecureArchiveFileWrapper* _textMessageHistoryFileWrapper;
	NSMutableDictionary* _textMessageHashes;

}

@property (nonatomic,retain) ENSecureArchiveFileWrapper * textMessageHistoryFileWrapper;              //@synthesize textMessageHistoryFileWrapper=_textMessageHistoryFileWrapper - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * textMessageHashes;                                 //@synthesize textMessageHashes=_textMessageHashes - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ENTextMessageManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(NSObject*<ENTextMessageManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<ENTextMessageManagerDelegate>)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)activateIfNeeded;
-(BOOL)_readIfNecessaryWithError:(id*)arg1 ;
-(void)_purgeOldHashes;
-(BOOL)_verifyTextMessage:(id)arg1 phoneNumber:(id)arg2 verificationDate:(id)arg3 publicKey:(id)arg4 publicKeyVersion:(id)arg5 outError:(id*)arg6 ;
-(void)purgeOldHashes;
-(void)purgeAllHashes;
-(BOOL)verifyTextMessage:(id)arg1 phoneNumber:(id)arg2 verificationDate:(id)arg3 publicKey:(id)arg4 publicKeyVersion:(id)arg5 outError:(id*)arg6 ;
-(ENSecureArchiveFileWrapper *)textMessageHistoryFileWrapper;
-(void)setTextMessageHistoryFileWrapper:(ENSecureArchiveFileWrapper *)arg1 ;
-(NSMutableDictionary *)textMessageHashes;
-(void)setTextMessageHashes:(NSMutableDictionary *)arg1 ;
@end
