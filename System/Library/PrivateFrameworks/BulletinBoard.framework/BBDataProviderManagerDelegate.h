/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBDataProviderManagerDelegate <NSObject>
@required
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
-(void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;

@end

