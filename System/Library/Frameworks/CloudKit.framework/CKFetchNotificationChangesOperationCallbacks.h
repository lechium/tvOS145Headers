/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKFetchNotificationChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 moreComing:(BOOL)arg2 metrics:(id)arg3 error:(id)arg4;
-(void)handleChangedNotification:(id)arg1;

@end

