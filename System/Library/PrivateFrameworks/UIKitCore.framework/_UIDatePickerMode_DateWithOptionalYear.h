/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDatePickerMode_Date.h>

@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date
+(long long)datePickerMode;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(long long)yearForRow:(long long)arg1 ;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(id)selectedDateComponents;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2 ;
@end

