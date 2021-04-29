//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSDictionary;

@interface SagaSetItemPropertyOperation : CloudLibraryOperation
{
    unsigned int _sagaID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100057a90
- (void).cxx_destruct;	// IMP=0x0000000100057890
- (void)main;	// IMP=0x00000001000575f4
- (_Bool)isPersistent;	// IMP=0x00000001000575ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100057540
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100057424
- (id)initWithConfiguration:(id)arg1 sagaID:(unsigned int)arg2 properties:(id)arg3;	// IMP=0x000000010005737c
- (id)initWithSagaID:(unsigned int)arg1 properties:(id)arg2;	// IMP=0x0000000100057300

@end
