//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IXSCoordinatorProgressDelegate;

@interface IXSCoordinatorProgress : NSObject
{
    _Bool _installingCompleted;	// 8 = 0x8
    unsigned long long _totalUnitsCompleted;	// 16 = 0x10
    unsigned long long _totalUnits;	// 24 = 0x18
    unsigned long long _progressPhase;	// 32 = 0x20
    double _currentPhaseProgress;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    id <IXSCoordinatorProgressDelegate> _delegate;	// 56 = 0x38
}

+ (double)_computeOverallProgressForCurrentProgress:(double)arg1 progressPhase:(unsigned long long)arg2;	// IMP=0x000000010000add0
- (void).cxx_destruct;	// IMP=0x000000010000b108
@property(nonatomic) __weak id <IXSCoordinatorProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) _Bool installingCompleted; // @synthesize installingCompleted=_installingCompleted;
@property(nonatomic) double currentPhaseProgress; // @synthesize currentPhaseProgress=_currentPhaseProgress;
@property(nonatomic) unsigned long long progressPhase; // @synthesize progressPhase=_progressPhase;
@property(nonatomic) unsigned long long totalUnits; // @synthesize totalUnits=_totalUnits;
@property(nonatomic) unsigned long long totalUnitsCompleted; // @synthesize totalUnitsCompleted=_totalUnitsCompleted;
- (void)_notifyDelegateAndUpdateProgressWithPhaseCompleted:(_Bool)arg1;	// IMP=0x000000010000ae10
- (void)finishInstalling;	// IMP=0x000000010000ad54
- (void)finishLoading;	// IMP=0x000000010000ace0
- (id)description;	// IMP=0x000000010000abe0
- (id)initForCoordinatorWithBundleID:(id)arg1 totalUnits:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x000000010000ab2c

@end

