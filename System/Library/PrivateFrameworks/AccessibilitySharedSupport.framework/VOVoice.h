/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, VOSubstitution;

@interface VOVoice : NSManagedObject

@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * voiceID; 
@property (nonatomic,retain) VOSubstitution * substitution; 
+(id)fetchRequest;
@end
