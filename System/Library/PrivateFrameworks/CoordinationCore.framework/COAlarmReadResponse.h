/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/COMeshResponse.h>

@class NSArray;

@interface COAlarmReadResponse : COMeshResponse {

	BOOL _filtered;
	NSArray* _alarms;

}

@property (nonatomic,copy,readonly) NSArray * alarms;                        //@synthesize alarms=_alarms - In the implementation block
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered;              //@synthesize filtered=_filtered - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)alarms;
-(id)initWithAlarms:(id)arg1 ;
-(BOOL)isFiltered;
-(id)initWithFilteredAlarms:(id)arg1 ;
@end
