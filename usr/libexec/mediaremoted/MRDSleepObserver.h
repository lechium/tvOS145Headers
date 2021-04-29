//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MRDSleepObserverDelegate;

@interface MRDSleepObserver : NSObject
{
    unsigned int _connection;	// 8 = 0x8
    unsigned int _identifier;	// 12 = 0xc
    id <MRDSleepObserverDelegate> _delegate;	// 16 = 0x10
    struct IONotificationPort *_port;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a6f1c
@property(readonly, nonatomic) struct IONotificationPort *port; // @synthesize port=_port;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <MRDSleepObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyDelegateOfWake;	// IMP=0x00000001000a6e54
- (void)notifyDelegateOfSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a6db0
- (id)init;	// IMP=0x00000001000a6a7c

@end

