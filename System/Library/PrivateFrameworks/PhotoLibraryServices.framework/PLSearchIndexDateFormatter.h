/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, PLDateRangeFormatter, NSString, NSArray;

@interface PLSearchIndexDateFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateFormatter;
	PLDateRangeFormatter* _dateRangeFormatter;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _displayFormat;
	NSString* _parseFormat;
	NSArray* _monthSymbols;
	BOOL _didSetupLocaleAndFormats;

}
+(id)monthFormatForLocale:(id)arg1 ;
+(id)yearFormatForLocale:(id)arg1 ;
-(id)init;
-(id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(id)localizedMonthStringsFromDate:(id)arg1 ;
-(id)localizedSeasonNameFromDate:(id)arg1 ;
-(id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_arrangedMonthSymbols;
-(void)_inqSetupDateFormatter;
-(void)_inqUpdateDateFormat:(id)arg1 ;
-(id)_inqNewLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2 ;
@end

