//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SHAppClipDelegate;

@interface SHAppClip : NSObject
{
    id <SHAppClipDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001c32c
@property(nonatomic) __weak id <SHAppClipDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestAppClipForURL:(id)arg1;	// IMP=0x000000010001c304

@end

