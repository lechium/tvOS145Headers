//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UARPPersonalizationNumberTupleBool : NSObject
{
    _Bool _value;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

@property(readonly) _Bool value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
- (id)description;	// IMP=0x000000010002a7d8
- (void)dealloc;	// IMP=0x000000010002a790
- (id)initWithKey:(id)arg1 value:(_Bool)arg2;	// IMP=0x000000010002a720

@end

