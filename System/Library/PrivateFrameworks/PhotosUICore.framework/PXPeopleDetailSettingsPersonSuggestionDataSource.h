/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPeopleDetailSettingsDataSource.h>

@class NSString, NSArray;

@interface PXPeopleDetailSettingsPersonSuggestionDataSource : NSObject <PXPeopleDetailSettingsDataSource> {

	NSString* _title;
	NSArray* _personSuggestions;

}

@property (nonatomic,retain) NSArray * personSuggestions;                     //@synthesize personSuggestions=_personSuggestions - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) BOOL hasMoreDetails; 
@property (nonatomic,readonly) long long action; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)action;
-(unsigned long long)numberOfItems;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)personNameAtIndex:(long long)arg1 ;
-(unsigned long long)faceCount:(long long)arg1 ;
-(long long)verifyTypeAtIndex:(long long)arg1 ;
-(id)modelObjectForIndex:(long long)arg1 ;
-(BOOL)hasMoreDetails;
-(id)initWithTitle:(id)arg1 personSuggestions:(id)arg2 ;
-(NSArray *)personSuggestions;
-(void)setPersonSuggestions:(NSArray *)arg1 ;
@end

