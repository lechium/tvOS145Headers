/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MKLocalSearch;

@interface CalGeocoder : NSObject {

	NSString* _locationString;
	/*^block*/id _completionBlock;
	MKLocalSearch* _search;

}

@property (nonatomic,retain) NSString * locationString;              //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,copy) id completionBlock;                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) MKLocalSearch * search;                 //@synthesize search=_search - In the implementation block
+(void)geocodeLocationString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(MKLocalSearch *)search;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithLocationString:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)startGeocoding;
@end

