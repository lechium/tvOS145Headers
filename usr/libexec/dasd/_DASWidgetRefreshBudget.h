//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_DASBudget.h"

@class NSString;

@interface _DASWidgetRefreshBudget : _DASBudget
{
    NSString *_widgetID;	// 8 = 0x8
}

+ (id)budgetWithName:(id)arg1 widgetID:(id)arg2 capacity:(double)arg3 balance:(double)arg4 allocationType:(unsigned char)arg5;	// IMP=0x0000000100013ee4
- (void).cxx_destruct;	// IMP=0x0000000100014298
@property(retain, nonatomic) NSString *widgetID; // @synthesize widgetID=_widgetID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000141bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100014134
- (id)dictionaryRepresentation;	// IMP=0x00000001000140a0
- (id)description;	// IMP=0x0000000100013f7c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100013e48
- (id)initWithName:(id)arg1 widgetID:(id)arg2 capacity:(double)arg3 balance:(double)arg4 allocationType:(unsigned char)arg5;	// IMP=0x0000000100013d98

@end
