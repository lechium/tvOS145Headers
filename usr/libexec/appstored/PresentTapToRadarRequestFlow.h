//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PresentTapToRadarRequestFlow : NSObject
{
    NSString *_message;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    CDUnknownBlockType _descriptionBlock;	// 24 = 0x18
}

+ (id)_dialogRequestWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010015cd78
+ (id)_createTapToRadarURLWithTitle:(id)arg1 description:(id)arg2;	// IMP=0x000000010015ca6c
+ (_Bool)supportsRequestFlow;	// IMP=0x000000010015c6c8
- (void).cxx_destruct;	// IMP=0x000000010015ce8c
@property(copy) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
- (void)presentRequestUsingSystemDialog;	// IMP=0x000000010015c6d0
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010015c604

@end

