/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAPerformDataDetectionMatch : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * dataDetectionType; 
@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSNumber * location; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)performDataDetectionMatch;
+(id)performDataDetectionMatchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)location;
-(void)setLocation:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dataDetectionType;
-(void)setDataDetectionType:(NSString *)arg1 ;
@end

