//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SiriCoreSQLiteRecordBuilder-Protocol.h"

@class NSString;
@protocol SiriCoreSQLiteValue;

@interface ADAnalyticsEventRecordBuilder : NSObject <SiriCoreSQLiteRecordBuilder>
{
    id <SiriCoreSQLiteValue> _streamUIDValue;	// 8 = 0x8
    id <SiriCoreSQLiteValue> _deliveryStreamValue;	// 16 = 0x10
    id <SiriCoreSQLiteValue> _typeValue;	// 24 = 0x18
    id <SiriCoreSQLiteValue> _timestampValue;	// 32 = 0x20
    id <SiriCoreSQLiteValue> _contextDataValue;	// 40 = 0x28
    id <SiriCoreSQLiteValue> _contextDataTypeValue;	// 48 = 0x30
    id <SiriCoreSQLiteValue> _dateCreatedValue;	// 56 = 0x38
    id <SiriCoreSQLiteValue> _assistantIdValue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100101624
- (id)build;	// IMP=0x00000001001013e0
- (void)setStorageValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010010127c
- (void)reset;	// IMP=0x0000000100101204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

