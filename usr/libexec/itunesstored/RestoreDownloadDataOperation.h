//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

#import "ISOperationDelegate-Protocol.h"

@class NSString;

@interface RestoreDownloadDataOperation : FinishDownloadStepOperation <ISOperationDelegate>
{
}

- (_Bool)_restoreDataForBundleID:(id)arg1 restoreState:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000100074e78
- (_Bool)_isFatalRestoreError:(id)arg1;	// IMP=0x0000000100074dc4
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x0000000100074d14
- (void)run;	// IMP=0x000000010007444c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

