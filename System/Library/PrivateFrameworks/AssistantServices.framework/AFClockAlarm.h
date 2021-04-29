/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSUUID, NSURL, NSString, NSDate;

@interface AFClockAlarm : NSObject <AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _isFiring;
	BOOL _isEnabled;
	BOOL _isSnoozed;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	NSString* _title;
	unsigned long long _type;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatOptions;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,readonly) NSUUID * itemID; 
@property (nonatomic,readonly) NSURL * itemURL; 
@property (nonatomic,readonly) BOOL isFiring; 
@property (nonatomic,copy,readonly) NSDate * firedDate; 
@property (nonatomic,copy,readonly) NSDate * dismissedDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * alarmID;                         //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * alarmURL;                         //@synthesize alarmURL=_alarmURL - In the implementation block
@property (nonatomic,readonly) BOOL isFiring;                                 //@synthesize isFiring=_isFiring - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long hour;                       //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) unsigned long long minute;                     //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatOptions;              //@synthesize repeatOptions=_repeatOptions - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                                //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isSnoozed;                                //@synthesize isSnoozed=_isSnoozed - In the implementation block
@property (nonatomic,copy,readonly) NSDate * firedDate;                       //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dismissedDate;                   //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hour;
-(unsigned long long)minute;
-(NSString *)title;
-(BOOL)isEnabled;
-(NSUUID *)itemID;
-(NSDate *)lastModifiedDate;
-(NSDate *)firedDate;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSUUID *)alarmID;
-(BOOL)isFiring;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDate *)dismissedDate;
-(NSURL *)itemURL;
-(unsigned long long)repeatOptions;
-(BOOL)isSnoozed;
-(NSURL *)alarmURL;
-(id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 isFiring:(BOOL)arg3 title:(id)arg4 type:(unsigned long long)arg5 hour:(unsigned long long)arg6 minute:(unsigned long long)arg7 repeatOptions:(unsigned long long)arg8 isEnabled:(BOOL)arg9 isSnoozed:(BOOL)arg10 firedDate:(id)arg11 dismissedDate:(id)arg12 lastModifiedDate:(id)arg13 ;
@end

