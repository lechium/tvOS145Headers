/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAceConfirmationContext : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * reason; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceConfirmationContext;
+(id)aceConfirmationContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(id)encodedClassName;
@end

