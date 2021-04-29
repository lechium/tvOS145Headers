/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDPDataPoint.h>

@class NSDate, NSArray, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint> {

	BOOL _userIsSender;
	BOOL _userIsThreadInitiator;
	NSDate* _timestamp;
	NSArray* _peopleIdentifiers;
	NSString* _title;

}

@property (assign,nonatomic) BOOL userIsSender;                        //@synthesize userIsSender=_userIsSender - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSArray * peopleIdentifiers;              //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL userIsThreadInitiator;               //@synthesize userIsThreadInitiator=_userIsThreadInitiator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)timestamp;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSArray *)peopleIdentifiers;
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(BOOL)userIsSender;
-(BOOL)userIsThreadInitiator;
-(void)setUserIsSender:(BOOL)arg1 ;
-(void)setUserIsThreadInitiator:(BOOL)arg1 ;
@end
