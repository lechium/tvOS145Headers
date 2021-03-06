//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface UserDialog : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    unsigned long long _optionFlags;	// 16 = 0x10
}

+ (id)dialogWithTitle:(id)arg1 andMessage:(id)arg2;	// IMP=0x000000010023bc88
- (void).cxx_destruct;	// IMP=0x000000010023bf58
@property unsigned long long optionFlags; // @synthesize optionFlags=_optionFlags;
@property(readonly) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)setTitle:(id)arg1;	// IMP=0x000000010023bf20
- (void)setOtherButton:(id)arg1;	// IMP=0x000000010023bf04
- (void)setMessage:(id)arg1;	// IMP=0x000000010023bee8
- (void)setDefaultButtonTag:(unsigned long long)arg1;	// IMP=0x000000010023be88
- (void)setDefaultButton:(id)arg1;	// IMP=0x000000010023be6c
- (void)setAlternateButton:(id)arg1;	// IMP=0x000000010023be50
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010023bd7c
- (id)init;	// IMP=0x000000010023bd10

@end

