//
//  StudentCollectionViewDatasource.h
//  PairRandomizer
//
//  Created by Caleb Hicks on 2/4/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StudentCollectionViewDatasource : NSObject <UICollectionViewDataSource>

- (void)registerCollectionView:(UICollectionView *)collectionView;
- (void)randomizeAndReload;

@end
