/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest {

	/*^block*/id _quotaFetchedBlock;

}

@property (nonatomic,copy) id quotaFetchedBlock;              //@synthesize quotaFetchedBlock=_quotaFetchedBlock - In the implementation block
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setQuotaFetchedBlock:(id)arg1 ;
-(id)quotaFetchedBlock;
@end

