/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKCompleteParticipantVettingOperationCallbacks.h>

@class NSString, NSData, NSURL, CKShareMetadata, CKCompleteParticipantVettingOperationInfo;

@interface CKCompleteParticipantVettingOperation : CKOperation <CKCompleteParticipantVettingOperationCallbacks> {

	/*^block*/id _completeParticipantVettingCompletionBlock;
	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSString* _displayedHostname;
	NSURL* _reconstructedShareURL;
	CKShareMetadata* _shareMetadata;

}

@property (nonatomic,copy) NSString * vettingToken;                                                                          //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,copy) NSString * vettingEmail;                                                                          //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,copy) NSString * vettingPhone;                                                                          //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,copy) NSString * routingKey;                                                                            //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,copy) NSData * encryptedKey;                                                                            //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,copy) NSString * baseToken;                                                                             //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,copy) NSString * displayedHostname;                                                                     //@synthesize displayedHostname=_displayedHostname - In the implementation block
@property (nonatomic,copy) NSURL * reconstructedShareURL;                                                                    //@synthesize reconstructedShareURL=_reconstructedShareURL - In the implementation block
@property (nonatomic,retain) CKShareMetadata * shareMetadata;                                                                //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,readonly) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKCompleteParticipantVettingOperationInfo * operationInfo; 
@property (nonatomic,copy) id completeParticipantVettingCompletionBlock;                                                     //@synthesize completeParticipantVettingCompletionBlock=_completeParticipantVettingCompletionBlock - In the implementation block
-(id)init;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSString *)routingKey;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSString *)displayedHostname;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(NSString *)vettingToken;
-(void)setVettingToken:(NSString *)arg1 ;
-(NSString *)vettingEmail;
-(void)setVettingEmail:(NSString *)arg1 ;
-(NSString *)vettingPhone;
-(void)setVettingPhone:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(void)setReconstructedShareURL:(NSURL *)arg1 ;
-(id)completeParticipantVettingCompletionBlock;
-(NSURL *)reconstructedShareURL;
-(void)handleReconstructedShareURL:(id)arg1 ;
-(void)handleFetchedShareMetadata:(id)arg1 ;
-(id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2 displayedHostname:(id)arg3 ;
-(void)setCompleteParticipantVettingCompletionBlock:(id)arg1 ;
@end

