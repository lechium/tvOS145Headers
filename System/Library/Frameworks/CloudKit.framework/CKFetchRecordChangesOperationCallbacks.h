/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKFetchRecordChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 metrics:(id)arg4 error:(id)arg5;
-(void)handleDeleteForRecordID:(id)arg1;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 reply:(/*^block*/id)arg4;

@end

