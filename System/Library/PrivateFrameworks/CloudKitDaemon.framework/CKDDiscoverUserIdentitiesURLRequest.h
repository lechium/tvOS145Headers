/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest {

	BOOL _wantsProtectionInfo;
	/*^block*/id _progressBlock;
	NSArray* _infosToDiscover;
	NSMutableDictionary* _submittedInfos;

}

@property (nonatomic,retain) NSArray * infosToDiscover;                         //@synthesize infosToDiscover=_infosToDiscover - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * submittedInfos;              //@synthesize submittedInfos=_submittedInfos - In the implementation block
@property (assign,nonatomic) BOOL wantsProtectionInfo;                          //@synthesize wantsProtectionInfo=_wantsProtectionInfo - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
-(long long)databaseScope;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithOperation:(id)arg1 lookupInfos:(id)arg2 ;
-(NSArray *)infosToDiscover;
-(BOOL)wantsProtectionInfo;
-(void)setWantsProtectionInfo:(BOOL)arg1 ;
-(void)setInfosToDiscover:(NSArray *)arg1 ;
-(NSMutableDictionary *)submittedInfos;
-(void)setSubmittedInfos:(NSMutableDictionary *)arg1 ;
@end

