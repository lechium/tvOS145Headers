/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSArray;

@interface MSVCLICommand : NSObject {

	NSDictionary* _cachedOptionsDictionary;
	NSString* _name;
	NSArray* _options;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * optionsDictionary; 
-(NSString *)name;
-(id)description;
-(id)init;
-(NSArray *)options;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)optionsDictionary;
-(BOOL)containsOption:(id)arg1 ;
-(id)valueForOption:(id)arg1 ;
@end

