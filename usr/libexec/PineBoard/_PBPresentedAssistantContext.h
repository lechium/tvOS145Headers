//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PBDialogContext, PBSDisplayAssistantPresentationRequest, UIViewController;

@interface _PBPresentedAssistantContext : NSObject
{
    UIViewController *_presentedController;	// 8 = 0x8
    NSString *_displayID;	// 16 = 0x10
    PBSDisplayAssistantPresentationRequest *_presentationRequest;	// 24 = 0x18
    PBDialogContext *_dialogueContext;	// 32 = 0x20
    CDUnknownBlockType _dismissHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001845e4
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) PBDialogContext *dialogueContext; // @synthesize dialogueContext=_dialogueContext;
@property(retain, nonatomic) PBSDisplayAssistantPresentationRequest *presentationRequest; // @synthesize presentationRequest=_presentationRequest;
@property(copy, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
- (id)description;	// IMP=0x00000001001842c0
- (id)initWithDisplayID:(id)arg1;	// IMP=0x00000001001841ec

@end

