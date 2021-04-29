/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKFetchRecordZoneChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 recordChangesStatus:(long long)arg4 hasPendingArchivedRecords:(BOOL)arg5 error:(id)arg6 reply:(/*^block*/id)arg7;
-(void)handleDeleteForRecordID:(id)arg1 recordType:(id)arg2;

@end
