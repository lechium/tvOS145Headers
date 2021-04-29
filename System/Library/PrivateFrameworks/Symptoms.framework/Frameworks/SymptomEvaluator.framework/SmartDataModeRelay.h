/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CellularStateRelay, SystemSettingsRelay;

@interface SmartDataModeRelay : NSObject {

	CellularStateRelay* _cellStateRelay;
	SystemSettingsRelay* _systemSettingsRelay;
	unsigned char _cellDataStatus;

}

@property (assign,nonatomic) unsigned char cellDataStatus;              //@synthesize cellDataStatus=_cellDataStatus - In the implementation block
+(id)sharedInstance;
+(id)cellDataStatusToString:(unsigned char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateCellDataStatus;
-(void)setCellDataStatus:(unsigned char)arg1 ;
-(unsigned char)cellDataStatus;
@end
