//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAWindowServerDisplay;

@interface _BKDisplayInfo : NSObject
{
    CAWindowServerDisplay *_windowServerDisplay;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    double _scale;	// 32 = 0x20
    double _orientation;	// 40 = 0x28
    _Bool _external;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100012c3c
@property(nonatomic, getter=isExternal) _Bool external; // @synthesize external=_external;
@property(nonatomic) double orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) CAWindowServerDisplay *windowServerDisplay; // @synthesize windowServerDisplay=_windowServerDisplay;
- (id)description;	// IMP=0x0000000100012b88

@end
