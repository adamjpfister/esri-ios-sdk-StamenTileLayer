//
//  StamenTiledLayer.h
//  evMETRA
//
//  Created by pfister on 4/25/13.
//  Copyright (c) 2013 apf. All rights reserved.
//

#import <ArcGIS/ArcGIS.h>

@interface StamenTiledLayer : AGSTiledServiceLayer
{
@protected
    NSString *_stamenMapType;
    NSString *_tileFormat;
	AGSTileInfo* _tileInfo;
	AGSEnvelope* _fullEnvelope;
	AGSUnits _units;
    NSArray *_subdomains;
}

- (id)initWithMapType:(NSString*)mapType;

- (NSURL*)urlForTileKey:(AGSTileKey *)key;

@end
