/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NEAccountIdentifiers : NSObject {

	NSArray* _mailAccountIdentifiers;
	NSArray* _calendarAccountIdentifiers;
	NSArray* _contactsAccountIdentifiers;

}

@property (copy) NSArray * mailAccountIdentifiers;                  //@synthesize mailAccountIdentifiers=_mailAccountIdentifiers - In the implementation block
@property (copy) NSArray * calendarAccountIdentifiers;              //@synthesize calendarAccountIdentifiers=_calendarAccountIdentifiers - In the implementation block
@property (copy) NSArray * contactsAccountIdentifiers;              //@synthesize contactsAccountIdentifiers=_contactsAccountIdentifiers - In the implementation block
-(NSArray *)mailAccountIdentifiers;
-(NSArray *)contactsAccountIdentifiers;
-(NSArray *)calendarAccountIdentifiers;
-(void)setMailAccountIdentifiers:(NSArray *)arg1 ;
-(void)setCalendarAccountIdentifiers:(NSArray *)arg1 ;
-(void)setContactsAccountIdentifiers:(NSArray *)arg1 ;
@end

