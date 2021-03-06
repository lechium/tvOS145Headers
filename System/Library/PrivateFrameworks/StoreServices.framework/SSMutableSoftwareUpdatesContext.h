/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSSoftwareUpdatesContext.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSArray;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (nonatomic,copy) NSString * clientIdentifierHeader; 
@property (assign,getter=isForced,nonatomic) BOOL forced; 
@property (nonatomic,copy) NSArray * softwareTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)setForced:(BOOL)arg1 ;
-(void)setSoftwareTypes:(NSArray *)arg1 ;
@end

