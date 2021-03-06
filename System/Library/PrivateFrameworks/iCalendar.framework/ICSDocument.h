/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICSCalendar;

@interface ICSDocument : NSObject {

	ICSCalendar* _calendar;

}
+(int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1 ;
+(void)suppressParserSyntaxErrorLogging;
-(id)calendar;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validate:(id*)arg1 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithCalendar:(id)arg1 ;
-(id)ICSChecksumStringForVersion:(int)arg1 ;
-(id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)ICSDataWithOptions:(unsigned long long)arg1 ;
-(id)ICSCompressedDataWithOptions:(unsigned long long)arg1 ;
-(id)ICSChecksumForVersion:(int)arg1 ;
@end

