/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, NSData;

@interface GPBAny : GPBMessage

@property (nonatomic,copy) NSString * typeURL; 
@property (nonatomic,copy) NSData * value; 
+(id)descriptor;
+(id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
+(id)anyWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(BOOL)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(id)initWithMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)packWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)unpackMessageClass:(Class)arg1 error:(id*)arg2 ;
@end

