/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLManagedObjectValidator : NSObject
+(id)validateManagedObject:(id)arg1 ;
+(BOOL)validateAllObjectsWithEntityClass:(Class)arg1 inManagedObjectContext:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(BOOL)validateAllObjectsUsingManagedObjectContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)_entityClassesToValidate;
@end

