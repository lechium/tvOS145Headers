//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BLSinfsArray : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100050ea4
@property(retain, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (_Bool)_isRecognizedProperty:(id)arg1;	// IMP=0x0000000100050e24
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100050cf8
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100050b00
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000100050894
- (id)initWithSINFs:(id)arg1;	// IMP=0x0000000100050814

@end
