/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EventsFolderItemsSyncContext : NSObject {

	int _calEventChangeId;
	int _calRecurrenceChangeId;
	int _calAlarmChangeId;
	int _calAttendeeChangeId;
	int _calAttachmentChangeId;
	int _highestSequenceNumber;

}

@property (assign,nonatomic) int calEventChangeId;                   //@synthesize calEventChangeId=_calEventChangeId - In the implementation block
@property (assign,nonatomic) int calRecurrenceChangeId;              //@synthesize calRecurrenceChangeId=_calRecurrenceChangeId - In the implementation block
@property (assign,nonatomic) int calAlarmChangeId;                   //@synthesize calAlarmChangeId=_calAlarmChangeId - In the implementation block
@property (assign,nonatomic) int calAttendeeChangeId;                //@synthesize calAttendeeChangeId=_calAttendeeChangeId - In the implementation block
@property (assign,nonatomic) int calAttachmentChangeId;              //@synthesize calAttachmentChangeId=_calAttachmentChangeId - In the implementation block
@property (assign,nonatomic) int highestSequenceNumber;              //@synthesize highestSequenceNumber=_highestSequenceNumber - In the implementation block
-(int)calEventChangeId;
-(void)setCalEventChangeId:(int)arg1 ;
-(int)calRecurrenceChangeId;
-(void)setCalRecurrenceChangeId:(int)arg1 ;
-(int)calAlarmChangeId;
-(void)setCalAlarmChangeId:(int)arg1 ;
-(int)calAttendeeChangeId;
-(void)setCalAttendeeChangeId:(int)arg1 ;
-(int)calAttachmentChangeId;
-(void)setCalAttachmentChangeId:(int)arg1 ;
-(int)highestSequenceNumber;
-(void)setHighestSequenceNumber:(int)arg1 ;
@end

