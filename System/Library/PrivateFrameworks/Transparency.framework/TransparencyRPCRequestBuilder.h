/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TransparencyRPCRequestBuilder : NSObject
+(id)buildRevisionLogInclusionProofRequest:(id)arg1 logType:(int)arg2 revisions:(id)arg3 error:(id*)arg4 ;
+(id)buildConsistencyProofRequest:(id)arg1 revisions:(id)arg2 error:(id*)arg3 ;
+(id)buildQueryRequest:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 application:(id)arg4 error:(id*)arg5 ;
+(id)buildPublicKeysRequest:(id)arg1 error:(id*)arg2 ;
@end
