/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXBrowserVisibleContentSnapshot.h>

@class NSDateInterval, NSArray, NSString;

@interface PXCuratedLibraryVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {

	/*^block*/id _dateIntervalFuture;
	/*^block*/id _locationNamesFuture;
	unsigned long long _dataSourceIdentifier;
	BOOL _isFiltering;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity; 
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDateInterval *)dateInterval;
-(NSString *)localizedPlaceholderText;
-(NSArray *)locationNames;
-(unsigned long long)dateIntervalGranularity;
-(id)initWithLibraryLayout:(id)arg1 dateType:(unsigned long long)arg2 ;
@end

