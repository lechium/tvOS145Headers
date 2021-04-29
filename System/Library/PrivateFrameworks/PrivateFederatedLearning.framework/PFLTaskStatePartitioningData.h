/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL;

@interface PFLTaskStatePartitioningData : NSObject <PFLTaskState> {

	NSURL* _compiledModelURL;

}

@property (nonatomic,readonly) NSURL * compiledModelURL;              //@synthesize compiledModelURL=_compiledModelURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)suspend;
-(unsigned long long)tag;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)compiledModelURL;
-(id)initWithCompiledModelURL:(id)arg1 ;
@end
