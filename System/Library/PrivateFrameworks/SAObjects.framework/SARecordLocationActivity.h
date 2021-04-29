/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALocation, NSString;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * sourceType; 
-(id)groupIdentifier;
-(NSString *)sourceType;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setSourceType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

