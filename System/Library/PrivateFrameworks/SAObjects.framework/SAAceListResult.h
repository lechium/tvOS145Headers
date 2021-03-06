/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAceListResult : SABaseAceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceListResult;
+(id)aceListResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)result;
-(id)groupIdentifier;
-(void)setResult:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

