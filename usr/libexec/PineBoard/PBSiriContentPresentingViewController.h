//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSystemOverlayContentPresenting-Protocol.h"

@class SiriPresentationPineBoardMainScreenViewController;
@protocol PBSystemOverlayContentDelegate;

@interface PBSiriContentPresentingViewController : UIViewController <PBSystemOverlayContentPresenting>
{
    _Bool _acceptsEventFocus;	// 8 = 0x8
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    SiriPresentationPineBoardMainScreenViewController *_assistantViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010008710c
@property(readonly, nonatomic) SiriPresentationPineBoardMainScreenViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100086c24
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008676c
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (id)initWithSiriViewController:(id)arg1;	// IMP=0x0000000100086658

@end

