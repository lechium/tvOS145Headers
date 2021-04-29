/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHBatchFetchingArrayDataSource <NSObject>
@required
-(id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3;
-(id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2;
-(id)bfa_fetchedObjectsForOIDs:(id)arg1 propertySetClass:(Class)arg2;
-(id)bfa_photoLibrary;

@end
