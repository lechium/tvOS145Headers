/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLModelMigratorRebuildProgressFraction : NSObject {

	BOOL _legacyRecoveryEnabled;
	BOOL _rebuildEnabled;

}

@property (assign,getter=isRebuildEnabled,nonatomic) BOOL rebuildEnabled;              //@synthesize rebuildEnabled=_rebuildEnabled - In the implementation block
@property (readonly) BOOL isLegacyRecoveryEnabled; 
-(BOOL)isLegacyRecoveryEnabled;
-(float)progressFractionForType:(unsigned char)arg1 ;
-(void)setRebuildEnabled:(BOOL)arg1 ;
-(id)initWithLegacyRecoveryEnabled:(BOOL)arg1 ;
-(BOOL)isRebuildEnabled;
@end

